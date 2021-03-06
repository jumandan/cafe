///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __base_advance_f__
#define __base_advance_f__

class wxExpenseListCtrl;

#include <wx/string.h>
#include <wx/listbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx_util/treelistctrl/treelistctrl.h>
#ifdef __VISUALC__
#include <wx/link_additions.h>
#endif //__VISUALC__
#include <wx/notebook.h>
#include <wx/button.h>
#include <wx/tglbtn.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class base_advance_f
///////////////////////////////////////////////////////////////////////////////
class base_advance_f : public wxDialog 
{
	private:
	
	protected:
		wxBoxSizer* main_bSizer;
		wxBoxSizer* group_sizer;
		wxNotebook* notebook;
		wxPanel* m_panel1;
		wxStaticBoxSizer* expense_type_sizer;
		wxListBox* expense_type_list;
		wxStaticText* amount_lb;
		wxTextCtrl* amount_ed;
		wxStaticBoxSizer* comment_sizer;
		wxTextCtrl* comment_ed;
		wxPanel* m_panel2;
		wxStaticBoxSizer* open_expenses_sizer;
		wxExpenseListCtrl* open_expenses_list;
		wxStaticBoxSizer* comment2_sizer;
		wxTextCtrl* m_textCtrl7;
		wxStaticText* change_lb;
		wxTextCtrl* change_ed;
		
		wxButton* m_button1;
		wxButton* m_button2;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;
		wxButton* m_button6;
		wxButton* m_button7;
		wxButton* m_button8;
		wxButton* m_button9;
		wxButton* m_button0;
		wxButton* m_button10;
		wxButton* m_button11;
		wxButton* bs_btn;
		
		wxButton* m_buttonq;
		wxButton* m_buttonw;
		wxButton* m_buttone;
		wxButton* m_buttonr;
		wxButton* m_buttont;
		wxButton* m_buttony;
		wxButton* m_buttonu;
		wxButton* m_buttoni;
		wxButton* m_buttono;
		wxButton* m_buttonp;
		wxButton* m_button12;
		wxButton* m_button13;
		wxButton* enter_btn;
		
		wxButton* m_buttona;
		wxButton* m_buttons;
		wxButton* m_buttond;
		wxButton* m_buttonf;
		wxButton* m_buttong;
		wxButton* m_buttonh;
		wxButton* m_buttonj;
		wxButton* m_buttonk;
		wxButton* m_buttonl;
		wxButton* m_button14;
		wxButton* m_button15;
		wxButton* m_button16;
		wxToggleButton* shift1_btn;
		wxButton* m_buttonz;
		wxButton* m_buttonx;
		wxButton* m_buttonc;
		wxButton* m_buttonv;
		wxButton* m_buttonb;
		wxButton* m_buttonn;
		wxButton* m_buttonm;
		wxButton* m_button17;
		wxButton* m_button18;
		wxButton* m_button19;
		wxToggleButton* shift2_btn;
		wxButton* kbd_btn;
		
		wxButton* space_btn;
		
		
		wxButton* ok_btn;
		
		wxButton* cancel_btn;
		
		
		// Virtual event handlers, overide them in your derived class
		virtual void notebookPageChanged( wxNotebookEvent& event ){ event.Skip(); }
		virtual void notebookPageChanging( wxNotebookEvent& event ){ event.Skip(); }
		virtual void OnExpenseTypeSelected( wxCommandEvent& event ){ event.Skip(); }
		virtual void amount_edFocus( wxFocusEvent& event ){ event.Skip(); }
		virtual void comment_edFocus( wxFocusEvent& event ){ event.Skip(); }
		virtual void change_edFocus( wxFocusEvent& event ){ event.Skip(); }
		virtual void btnClick( wxCommandEvent& event ){ event.Skip(); }
		virtual void bs_btnClick( wxCommandEvent& event ){ event.Skip(); }
		virtual void enter_btnClick( wxCommandEvent& event ){ event.Skip(); }
		virtual void shift_btnClick( wxCommandEvent& event ){ event.Skip(); }
		virtual void kbd_btnClick( wxCommandEvent& event ){ event.Skip(); }
		virtual void space_btnClick( wxCommandEvent& event ){ event.Skip(); }
		virtual void ok_btnClick( wxCommandEvent& event ){ event.Skip(); }
		virtual void cancel_btnClick( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		base_advance_f( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxCAPTION );
		~base_advance_f();
	
};

#endif //__base_advance_f__
