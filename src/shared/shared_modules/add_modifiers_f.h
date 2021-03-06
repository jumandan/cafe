#ifndef __add_modifiers_f__
#define __add_modifiers_f__

/**
@file
Subclass of base_add_modifiers_f, which is generated by wxFormBuilder.
*/

#include "base_add_modifiers_f.h"
#include "cashier_ico.h"
#include <wx/stattext.h>
#include <vector>
#include <map>
#include <ksi_order/menu_container.hpp>
#include <ksi_order/order_interface.hpp>
/** Implementing base_add_modifiers_f */

class add_modifiers_f : public base_add_modifiers_f
{
protected:
	// Handlers for base_add_modifiers_f events.
	void plus_btnClick( wxCommandEvent& event );
	void minus_btnClick( wxCommandEvent& event );
	void delete_btnClick( wxCommandEvent& event );
	void prev_page_btnClick( wxCommandEvent& event );
	void next_page_btnClick( wxCommandEvent& event );
	void ok_btnClick( wxCommandEvent& event );
	void cancel_btnClick( wxCommandEvent& event );
	void sel_changed( wxTreeEvent& event );
	void sel_changing( wxTreeEvent& event );
public:
	/** Constructor */
	add_modifiers_f( wxWindow* parent, const wxString& cap,  ksi_cafe::simple_stop_list_t* stop_list_);
	/** Desctructor */
	~add_modifiers_f();
	size_t set_modifiers(ksi_cafe::menu_t* menu, const ksi_cafe::menu_dish_t* menu_dish);
	std::vector<ksi_cafe::order_dish_modifier_t> sel_mods() const;
private:
	void modifier_btnClick( wxCommandEvent& event );
	void show();
	void insert_modifier(wxButton* btn, const ksi_cafe::menu_dish_modifier_t* modifier);
	void add_modifier(const ksi_cafe::menu_dish_modifier_t* modifier);
	int curr_weight(const ksi_cafe::modifier_group_t* group) const;
	void hide_btn_group();
private:
	std::vector<wxButton*> btn_vec_;
	std::vector<wxStaticText*> label_vec_;
	ksi_cafe::simple_stop_list_t* stop_list_;
	std::map<const ksi_cafe::menu_dish_modifier_t*, const ksi_cafe::modifier_group_t*> mods_;
	std::vector<const ksi_cafe::menu_dish_modifier_t*> mod_vec_;
	std::vector<const ksi_cafe::modifier_group_t*> group_vec_;
	std::vector<int> group_height_;
	size_t curr_page_;
	std::map<wxButton*, const ksi_cafe::menu_dish_modifier_t*> kv_modifier_;
};

#endif // __add_modifiers_f__
