#ifndef CAPRICEGUIVIEW_H
#define CAPRICEGUIVIEW_H

#include "wgui.h"

class CapriceGuiView : public wGui::CView
{
  protected:
    wGui::CFrame *m_menuFrame;

  public:
    CapriceGuiView(wGui::CApplication& application, SDL_Surface* surface, SDL_Surface* backSurface, const wGui::CRect& WindowRect);

    void PaintToSurface(SDL_Surface& ScreenSurface, SDL_Surface& FloatingSurface, const wGui::CPoint& Offset) const override;
};

#endif
