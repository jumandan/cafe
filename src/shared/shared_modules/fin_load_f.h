#ifndef __fin_load_f__
#define __fin_load_f__

/**
@file
Subclass of base_load_f, which is generated by wxFormBuilder.
*/

#include "base_load_f.h"
#include <boost/thread.hpp>
#include <boost/bind.hpp>
#include <wx_util/wx_util.hpp>

/** Implementing base_load_f */
class fin_load_f : public base_load_f
{
protected:
	// Handlers for base_load_f events.
	void cancel_btnClick( wxCommandEvent& event );
private:
	void OnTimer (wxTimerEvent& event);
public:
	/** Constructor */
	fin_load_f( wxWindow* parent, const wxString& title, const wxString& label );
	template<typename Callble>
	void start(Callble func) {
		thr_ = boost::thread(func);
		timer_.start2(5);
	}
private:
	boost::thread thr_;
	wx_timer_t<fin_load_f> timer_;
};

#endif // __fin_load_f__
