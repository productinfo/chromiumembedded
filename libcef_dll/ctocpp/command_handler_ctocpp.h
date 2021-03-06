// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=986b761d9c3bca7980b4144bb0802a9eafff9e0e$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_COMMAND_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_COMMAND_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_command_handler_capi.h"
#include "include/cef_command_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefCommandHandlerCToCpp
    : public CefCToCppRefCounted<CefCommandHandlerCToCpp,
                                 CefCommandHandler,
                                 cef_command_handler_t> {
 public:
  CefCommandHandlerCToCpp();
  virtual ~CefCommandHandlerCToCpp();

  // CefCommandHandler methods.
  bool OnChromeCommand(CefRefPtr<CefBrowser> browser,
                       int command_id,
                       cef_window_open_disposition_t disposition) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_COMMAND_HANDLER_CTOCPP_H_
