#ifndef __auth_f__
#define __auth_f__

/**
@file
Subclass of base_auth_f, which is generated by wxFormBuilder.
*/

#include "base_auth_f.h"
#include <wx_util/wx_util.hpp>
#include "text_f.h"
/** Implementing base_auth_f */
class auth_f : public base_auth_f
{
protected:
	// Handlers for base_auth_f events.
	void onChar( wxKeyEvent& event );
	void onKeyDown( wxKeyEvent& event );
	void ok_btnClick( wxCommandEvent& event );
	void cancel_btnClick( wxCommandEvent& event );
	void show_kbd_btnClick( wxCommandEvent& event );
	void advanced_btnClick( wxCommandEvent& event );
	void login_edSetFocus( wxFocusEvent& event );
	void password_edSetFocus( wxFocusEvent& event );
	void host_edSetFocus( wxFocusEvent& event );
public:
	/** Constructor */
	auth_f( wxWindow*, const wxString&, const wxString&, const wxString&);
	~auth_f();
private:	
	wxString get_host(wxString host_str);
	wxString get_sid(wxString host_str);
	int get_port(wxString host_str);
public:
	wxString login() const { return login_ed->GetValue(); }
	wxString password() const { return password_ed->GetValue(); }
	wxString host() const { return host_ed->GetValue(); }
	//wxString sid() const { return get_sid(host_ed->GetValue()); }
	//int port() const { return get_port(host_ed->GetValue()); }
	
	std::string login_mb() const { return to_mb(login_ed->GetValue()); }
	std::string password_mb() const { return to_mb(password_ed->GetValue()); }
	std::string host_mb() { return to_mb(get_host(host_ed->GetValue())); }
	std::string sid_mb() { return to_mb(get_sid(host_ed->GetValue())); }
	std::string raw_host_mb() const { return to_mb(host_ed->GetValue()); }
	
	int port_mb() { return get_port(host_ed->GetValue()); }
	void set_login(const std::string& login) { login_ed->SetValue(to_uc(login)); }
	void set_host(const std::string& host, bool enable=true) { host_ed->SetValue(to_uc(host)), host_ed->Enable(enable); }; 
private:
	void curr_show();
	void full_show();
	void half_show();
	bool check();
	void vkbdClick( vkbdEvent& event );
private:
	bool half_show_;
	bool catch_return_;
	bool card_reading_;
	wxString buff_;
	wxString cc_main_caption_;
	wxString cc_other_caption_;
	wx_window_ptr<text_f> kbd_form;
	wxWindow* active_;
	bool kbd_showed_;
	bool req_version_;
};

#endif // __auth_f__
