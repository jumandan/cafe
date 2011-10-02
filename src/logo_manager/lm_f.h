#ifndef __lm_f__
#define __lm_f__

/**
@file
Subclass of base_lm_f, which is generated by wxFormBuilder.
*/

#include "base_lm_f.h"
#include <memory>


class com_t;
class base_printer_t;
class wxStatusBar;

/** Implementing base_lm_f */
class lm_f : public base_lm_f
{
protected:
	// Handlers for base_lm_f events.
	void bmpOnPaint( wxPaintEvent& event );
	void bmpOnSize( wxSizeEvent& event );
	void m_OpenClick( wxCommandEvent& event );	
	void m_save_asClick( wxCommandEvent& event );
	void m_save_asOnPopUp( wxUpdateUIEvent& event );
	void m_exitClick( wxCommandEvent& event );
	void m_register_logoClick( wxCommandEvent& event );
	void m_register_logoOnPopUp( wxUpdateUIEvent& event );
	void m_centerClick( wxCommandEvent& event );
	void m_centerOnPopUp( wxUpdateUIEvent& event );
	void m_optionsClick( wxCommandEvent& event );
	void m_aboutClick( wxCommandEvent& event );
	void statusBarDClick( wxMouseEvent& event );
	void statusBarUpdateUI( wxUpdateUIEvent& event );
public:
	/** Constructor */
	lm_f( wxWindow* parent );
private:
	std::auto_ptr<com_t> com_;
	std::auto_ptr<base_printer_t> printer_;
	bool opened_;
	bool binary_;
	bool center_;
	std::auto_ptr<wxBitmap> pic_;
	std::auto_ptr<wxBitmap> backUp_pic_;
	std::auto_ptr<wxBitmap> orign_pic_;
	wxString pic_file_;
	wxString pic_dir_;		
	/** Methods*/
	void draw_image(bool OnPaint);
	void correct_size();
	void show_options();
	void show_about();
	void center_image();
};

#endif // __lm_f__
