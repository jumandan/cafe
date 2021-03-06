
IF (SOURCE_FILES)
	execute_process(COMMAND cmake -DSOURCE_FILES=1 -G${CMAKE_GENERATOR} WORKING_DIRECTORY $ENV{CAFE_SRC}/shared/tinyxml)	
	RETURN()
ELSE (SOURCE_FILES)
ENDIF (SOURCE_FILES)

FIND_LIBRARY (TINYXML_LIB NAMES tinyxml-s PATHS $ENV{CAFE_SRC}/shared/tinyxml)

IF (NOT TINYXML_LIB)
	MESSAGE (STATUS "try_compile tinyxml lib")
	TRY_COMPILE (BUILD_TINYXML $ENV{CAFE_SRC}/shared/tinyxml $ENV{CAFE_SRC}/shared/tinyxml TinyXmlLibrary CMAKE_FLAGS -DSOURCE_FILES:UNINITIALIZED=0)

	IF (NOT BUILD_TINYXML)
		MESSAGE (FATAL_ERROR "can't build tinyxml lib")
	ELSE (NOT BUILD_TINYXML)	
		MESSAGE (STATUS "compile tinyxml lib successful")
	ENDIF (NOT BUILD_TINYXML)
ENDIF (NOT TINYXML_LIB)
