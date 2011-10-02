
IF (SOURCE_FILES)
	execute_process(COMMAND cmake -DSOURCE_FILES=1 -G${CMAKE_GENERATOR} WORKING_DIRECTORY $ENV{CAFE_SRC}/shared/fiscal_register)
	RETURN()
ELSE (SOURCE_FILES)
ENDIF (SOURCE_FILES)

FIND_LIBRARY (FISCAL_LIB NAMES fiscal-s PATHS $ENV{CAFE_SRC}/shared/fiscal_register)

IF (NOT FISCAL_LIB)
	MESSAGE (STATUS "try_compile fiscal lib")
	TRY_COMPILE (BUILD_FISCAL $ENV{CAFE_SRC}/shared/fiscal_register $ENV{CAFE_SRC}/shared/fiscal_register FiscalLibrary CMAKE_FLAGS -DSOURCE_FILES:UNINITIALIZED=0)
	
	IF (NOT BUILD_FISCAL)
		MESSAGE (FATAL_ERROR "can't build fiscal lib")
	ELSE (NOT BUILD_FISCAL)
		MESSAGE (STATUS "compile fiscal lib successful")
	ENDIF (NOT BUILD_FISCAL)
ENDIF (NOT FISCAL_LIB)





