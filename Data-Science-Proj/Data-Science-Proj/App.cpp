#include "App.h"
#include "MainFrame.h"
#include  <wx/wx.h>

bool App::OnInit() {
  //wxFrame* window = new wxFrame(NULL, wxID_ANY, "GUI Test", wxDefaultPosition, wxSize(800, 600));
  //wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
  //wxStaticText* text = new wxStaticText(window, wxID_ANY, "Well Done!\nEverything seems to be working",
  //  wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
  //text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
  //sizer->Add(text, 1, wxALIGN_CENTER);
  //window->SetSizer(sizer);
  //window->Center();
  //window->Show();
  //return true;


  MainFrame* mf = new MainFrame("Dees nuts");
  mf->SetClientSize(800, 600);
  mf->Center();
  mf->Show();
  return true;
};

wxIMPLEMENT_APP(App);