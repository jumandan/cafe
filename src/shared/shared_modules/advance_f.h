#ifndef __advance_f__
#define __advance_f__

/**
@file
Subclass of base_advance_f, which is generated by wxFormBuilder.
*/

#include "base_advance_f.h"
#include <map>
#include <wx_util/wx_util.hpp>
#include <ksi_util/cash_advance.hpp>

/** Implementing base_advance_f */
class advance_f : public base_advance_f
{
protected:
	// Handlers for base_advance_f events.
	void notebookPageChanged( wxNotebookEvent& event );
	void notebookPageChanging( wxNotebookEvent& event );
	void amount_edFocus( wxFocusEvent& event );
	void comment_edFocus( wxFocusEvent& event );
	void change_edFocus( wxFocusEvent& event );
	void open_expenses_listSelected( wxListEvent& event );
	void btnClick( wxCommandEvent& event );
	void bs_btnClick( wxCommandEvent& event );
	void enter_btnClick( wxCommandEvent& event );
	void shift_btnClick( wxCommandEvent& event );
	void kbd_btnClick( wxCommandEvent& event );
	void space_btnClick( wxCommandEvent& event );
	void ok_btnClick( wxCommandEvent& event );
	void cancel_btnClick( wxCommandEvent& event );
	void OnExpenseTypeSelected( wxCommandEvent& event );
	std::map<wxButton*, wxString> us_up_;
	std::map<wxButton*, wxString> us_low_;
	std::map<wxButton*, wxString> ru_up_;
	std::map<wxButton*, wxString> ru_low_;
	std::vector<ksi_cafe::expense_type_t> type_vec_;
	std::vector<wxString> type_str_vec;
public:
	/** Constructor */
	advance_f( wxWindow* parent, const wxString& title, int manager_id_);
	~advance_f();
private:
	/** Evetns */
	void sgSelChanged( wxTreeEvent& event );
	void sgSelChanging( wxTreeEvent& event );
private:
	void apply_kbd();
	bool valid();
private:
	int kbd_; // 1 - us, 2 - ru
	int kbd_case_; // 0 - low, 1 - up
	wxWindow* active_;
	int manager_id_;
};

#endif // __advance_f__