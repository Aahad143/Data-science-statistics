#include "MainFrame.h"
#include  <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
//MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600)) {
  wxPanel* panel = new wxPanel(this, wxID_ANY);

  wxTextCtrl* textctrl = new wxTextCtrl(panel, wxID_ANY, "Pretext", wxPoint(300, 290), wxSize(200, 20));
};