//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: GDIDE.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "GDIDEDialogs.h"


// Declare the bitmap loading function
extern void wxCraftergfm8VaInitBitmapResources();

static bool bBitmapLoaded = false;


BaseStartHerePage::BaseStartHerePage(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCraftergfm8VaInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxFlexGridSizer* flexGridSizer3 = new wxFlexGridSizer(0, 1, 0, 0);
    flexGridSizer3->SetFlexibleDirection( wxBOTH );
    flexGridSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer3->AddGrowableCol(0);
    flexGridSizer3->AddGrowableRow(1);
    this->SetSizer(flexGridSizer3);
    
    wxFlexGridSizer* logoSizer = new wxFlexGridSizer(0, 1, 0, 0);
    logoSizer->SetFlexibleDirection( wxBOTH );
    logoSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    logoSizer->AddGrowableCol(0);
    
    flexGridSizer3->Add(logoSizer, 1, wxALL|wxEXPAND, 5);
    
    logoBmp = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), 0 );
    
    logoSizer->Add(logoBmp, 0, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_HORIZONTAL, 15);
    
    m_staticText9 = new wxStaticText(this, wxID_ANY, _("The open source, codingless game creator"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_staticText9->SetForegroundColour(wxColour(wxT("rgb(160,160,160)")));
    
    logoSizer->Add(m_staticText9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 7);
    
    wxFlexGridSizer* centerSizer = new wxFlexGridSizer(0, 2, 0, 0);
    centerSizer->SetFlexibleDirection( wxBOTH );
    centerSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    flexGridSizer3->Add(centerSizer, 1, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    
    wxFlexGridSizer* gettingstartedSizer = new wxFlexGridSizer(0, 1, 0, 0);
    gettingstartedSizer->SetFlexibleDirection( wxBOTH );
    gettingstartedSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    centerSizer->Add(gettingstartedSizer, 1, wxALL|wxEXPAND, 10);
    
    wxFlexGridSizer* flexGridSizer82 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer82->SetFlexibleDirection( wxBOTH );
    flexGridSizer82->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    gettingstartedSizer->Add(flexGridSizer82, 0, wxALL, 0);
    
    gettingStartedBmp = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), 0 );
    
    flexGridSizer82->Add(gettingStartedBmp, 0, wxRIGHT|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5);
    
    gettingStartedTxt = new wxStaticText(this, wxID_ANY, _("Getting started"), wxDefaultPosition, wxSize(-1,-1), 0);
    gettingStartedTxt->SetForegroundColour(wxColour(wxT("rgb(120,120,120)")));
    
    flexGridSizer82->Add(gettingStartedTxt, 0, wxALL, 3);
    
    wxFlexGridSizer* flexGridSizer21 = new wxFlexGridSizer(0, 1, 0, 0);
    flexGridSizer21->SetFlexibleDirection( wxBOTH );
    flexGridSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    gettingstartedSizer->Add(flexGridSizer21, 1, wxALL|wxEXPAND, 5);
    
    m_hyperLink17 = new wxHyperlinkCtrl(this, wxID_ANY, _("Start a platformer game in 5 minutes"), wxT("https://www.youtube.com/watch?v=5jdOR-NAiSA"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink17->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink17->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink17->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer21->Add(m_hyperLink17, 0, wxALL, 3);
    
    m_hyperLink231 = new wxHyperlinkCtrl(this, wxID_ANY, _("Step-by-step Beginner Tutorial"), wxT("http://wiki.compilgames.net/doku.php/en/game_develop/tutorials/beginnertutorial2"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink231->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink231->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink231->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer21->Add(m_hyperLink231, 0, wxALL, 3);
    
    m_hyperLink23 = new wxHyperlinkCtrl(this, wxID_ANY, _("More videos and tutorials on the wiki"), wxT("http://wiki.compilgames.net/doku.php/en/game_develop/tutorials"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink23->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink23->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink23->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer21->Add(m_hyperLink23, 0, wxALL, 3);
    
    wxFlexGridSizer* latestProjectsSizer = new wxFlexGridSizer(0, 1, 0, 0);
    latestProjectsSizer->SetFlexibleDirection( wxBOTH );
    latestProjectsSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    centerSizer->Add(latestProjectsSizer, 1, wxALL|wxEXPAND, 10);
    
    wxFlexGridSizer* flexGridSizer85 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer85->SetFlexibleDirection( wxBOTH );
    flexGridSizer85->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    latestProjectsSizer->Add(flexGridSizer85, 0, wxALL, 0);
    
    latestProjectsBmp = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), 0 );
    
    flexGridSizer85->Add(latestProjectsBmp, 0, wxRIGHT|wxBOTTOM, 5);
    
    latestProjectsTxt = new wxStaticText(this, wxID_ANY, _("Latest projects"), wxDefaultPosition, wxSize(-1,-1), 0);
    latestProjectsTxt->SetForegroundColour(wxColour(wxT("rgb(120,120,120)")));
    
    flexGridSizer85->Add(latestProjectsTxt, 0, wxALL, 3);
    
    wxFlexGridSizer* flexGridSizer21410 = new wxFlexGridSizer(0, 1, 0, 0);
    flexGridSizer21410->SetFlexibleDirection( wxBOTH );
    flexGridSizer21410->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    latestProjectsSizer->Add(flexGridSizer21410, 1, wxALL|wxEXPAND, 5);
    
    lastProject1Bt = new wxHyperlinkCtrl(this, wxID_ANY, _("-"), wxT(""), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    lastProject1Bt->SetNormalColour(wxColour(wxT("#0000FF")));
    lastProject1Bt->SetHoverColour(wxColour(wxT("#0000FF")));
    lastProject1Bt->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer21410->Add(lastProject1Bt, 0, wxALL, 3);
    
    lastProject2Bt = new wxHyperlinkCtrl(this, wxID_ANY, _("-"), wxT(""), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    lastProject2Bt->SetNormalColour(wxColour(wxT("#0000FF")));
    lastProject2Bt->SetHoverColour(wxColour(wxT("#0000FF")));
    lastProject2Bt->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer21410->Add(lastProject2Bt, 0, wxALL, 3);
    
    lastProject3Bt = new wxHyperlinkCtrl(this, wxID_ANY, _("-"), wxT(""), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    lastProject3Bt->SetNormalColour(wxColour(wxT("#0000FF")));
    lastProject3Bt->SetHoverColour(wxColour(wxT("#0000FF")));
    lastProject3Bt->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer21410->Add(lastProject3Bt, 0, wxALL, 3);
    
    wxFlexGridSizer* communitySizer = new wxFlexGridSizer(0, 1, 0, 0);
    communitySizer->SetFlexibleDirection( wxBOTH );
    communitySizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    centerSizer->Add(communitySizer, 1, wxALL|wxEXPAND, 10);
    
    wxFlexGridSizer* flexGridSizer91 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer91->SetFlexibleDirection( wxBOTH );
    flexGridSizer91->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    communitySizer->Add(flexGridSizer91, 0, wxALL, 0);
    
    communityBmp = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), 0 );
    
    flexGridSizer91->Add(communityBmp, 0, wxRIGHT|wxBOTTOM, 5);
    
    communityTxt = new wxStaticText(this, wxID_ANY, _("Community"), wxDefaultPosition, wxSize(-1,-1), 0);
    communityTxt->SetForegroundColour(wxColour(wxT("rgb(120,120,120)")));
    
    flexGridSizer91->Add(communityTxt, 0, wxALL, 3);
    
    wxFlexGridSizer* flexGridSizer214 = new wxFlexGridSizer(0, 1, 0, 0);
    flexGridSizer214->SetFlexibleDirection( wxBOTH );
    flexGridSizer214->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    communitySizer->Add(flexGridSizer214, 1, wxALL|wxEXPAND, 5);
    
    m_hyperLink175 = new wxHyperlinkCtrl(this, wxID_ANY, _("Go on GDevelop community forums"), wxT("http://forum.compilgames.net/viewforum.php?f=17"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink175->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink175->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink175->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer214->Add(m_hyperLink175, 0, wxALL, 3);
    
    m_hyperLink2316 = new wxHyperlinkCtrl(this, wxID_ANY, _("Facebook page"), wxT("https://www.facebook.com/GameDevelop"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink2316->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink2316->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink2316->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer214->Add(m_hyperLink2316, 0, wxALL, 3);
    
    m_hyperLink237 = new wxHyperlinkCtrl(this, wxID_ANY, _("Follow GDevelop on Twitter"), wxT("https://twitter.com/Game_Develop"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink237->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink237->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink237->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer214->Add(m_hyperLink237, 0, wxALL, 3);
    
    wxFlexGridSizer* newsSizer = new wxFlexGridSizer(0, 1, 0, 0);
    newsSizer->SetFlexibleDirection( wxBOTH );
    newsSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    centerSizer->Add(newsSizer, 1, wxALL|wxEXPAND, 10);
    
    wxFlexGridSizer* flexGridSizer88 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer88->SetFlexibleDirection( wxBOTH );
    flexGridSizer88->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    newsSizer->Add(flexGridSizer88, 0, wxALL, 0);
    
    newsBmp = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), 0 );
    
    flexGridSizer88->Add(newsBmp, 0, wxRIGHT|wxBOTTOM, 5);
    
    newsTxt = new wxStaticText(this, wxID_ANY, _("Latest news"), wxDefaultPosition, wxSize(-1,-1), 0);
    newsTxt->SetForegroundColour(wxColour(wxT("rgb(120,120,120)")));
    
    flexGridSizer88->Add(newsTxt, 0, wxALL, 3);
    
    newsEdit = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_READONLY|wxTE_MULTILINE);
    
    newsSizer->Add(newsEdit, 0, wxLEFT|wxRIGHT|wxTOP|wxEXPAND, 5);
    newsEdit->SetMinSize(wxSize(300,65));
    
    wxFlexGridSizer* flexGridSizer77 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer77->SetFlexibleDirection( wxBOTH );
    flexGridSizer77->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer77->AddGrowableCol(0);
    
    newsSizer->Add(flexGridSizer77, 1, wxALL|wxEXPAND, 5);
    
    newsLink1 = new wxHyperlinkCtrl(this, wxID_ANY, wxT(""), wxT(""), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    newsLink1->SetNormalColour(wxColour(wxT("#0000FF")));
    newsLink1->SetHoverColour(wxColour(wxT("#0000FF")));
    newsLink1->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer77->Add(newsLink1, 0, wxLEFT|wxRIGHT|wxALIGN_RIGHT, 5);
    
    newsLink2 = new wxHyperlinkCtrl(this, wxID_ANY, wxT(""), wxT(""), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    newsLink2->SetNormalColour(wxColour(wxT("#0000FF")));
    newsLink2->SetHoverColour(wxColour(wxT("#0000FF")));
    newsLink2->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer77->Add(newsLink2, 0, wxLEFT|wxRIGHT, 5);
    
    wxFlexGridSizer* bottomSizer = new wxFlexGridSizer(0, 7, 0, 0);
    bottomSizer->SetFlexibleDirection( wxBOTH );
    bottomSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    flexGridSizer3->Add(bottomSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM, 5);
    
    m_staticText53 = new wxStaticText(this, wxID_ANY, _("GDevelop is open source:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    bottomSizer->Add(m_staticText53, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10);
    
    donateBmp = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), 0 );
    
    bottomSizer->Add(donateBmp, 0, wxRIGHT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 4);
    
    donateLinkBt = new wxHyperlinkCtrl(this, wxID_ANY, _("Donate if you like it"), wxT("http://www.compilgames.net/donate.php"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    donateLinkBt->SetNormalColour(wxColour(wxT("#0000FF")));
    donateLinkBt->SetHoverColour(wxColour(wxT("#0000FF")));
    donateLinkBt->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    bottomSizer->Add(donateLinkBt, 0, wxRIGHT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5);
    
    githubBmp = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), 0 );
    
    bottomSizer->Add(githubBmp, 0, wxALL|wxALIGN_CENTER_VERTICAL, 4);
    
    m_hyperLink57 = new wxHyperlinkCtrl(this, wxID_ANY, _("Contribute on GitHub"), wxT("https://github.com/4ian/GD"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink57->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink57->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink57->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    bottomSizer->Add(m_hyperLink57, 0, wxRIGHT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5);
    
    localeBmp = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(-1,-1), 0 );
    
    bottomSizer->Add(localeBmp, 0, wxALL|wxALIGN_CENTER_VERTICAL, 4);
    
    m_hyperLink572 = new wxHyperlinkCtrl(this, wxID_ANY, _("Help to translate GD in your language"), wxT("https://crowdin.com/project/gdevelop"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink572->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink572->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink572->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    bottomSizer->Add(m_hyperLink572, 0, wxRIGHT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 5);
    
    SetBackgroundColour(wxColour(wxT("rgb(255,255,255)")));
    SetSizeHints(700,500);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    lastProject1Bt->Connect(wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler(BaseStartHerePage::OnLastProject1Click), NULL, this);
    lastProject2Bt->Connect(wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler(BaseStartHerePage::OnLastProject2Click), NULL, this);
    lastProject3Bt->Connect(wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler(BaseStartHerePage::OnLastProject3Click), NULL, this);
    
}

BaseStartHerePage::~BaseStartHerePage()
{
    lastProject1Bt->Disconnect(wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler(BaseStartHerePage::OnLastProject1Click), NULL, this);
    lastProject2Bt->Disconnect(wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler(BaseStartHerePage::OnLastProject2Click), NULL, this);
    lastProject3Bt->Disconnect(wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler(BaseStartHerePage::OnLastProject3Click), NULL, this);
    
}
