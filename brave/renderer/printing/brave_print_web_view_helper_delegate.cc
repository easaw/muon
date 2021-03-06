// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "brave/renderer/printing/brave_print_web_view_helper_delegate.h"

#include <vector>

#include "base/command_line.h"
#include "base/strings/string_util.h"
#include "chrome/renderer/prerender/prerender_helper.h"
#include "content/public/renderer/render_frame.h"
#include "content/public/renderer/render_view.h"
#include "ipc/ipc_message.h"
#include "third_party/WebKit/public/web/WebDocument.h"
#include "third_party/WebKit/public/web/WebElement.h"
#include "third_party/WebKit/public/web/WebLocalFrame.h"

BravePrintWebViewHelperDelegate::~BravePrintWebViewHelperDelegate() {
}

bool BravePrintWebViewHelperDelegate::CancelPrerender(
    content::RenderView* render_view, int routing_id) {
  return false;
}

// Return the PDF object element if |frame| is the out of process PDF extension.
blink::WebElement BravePrintWebViewHelperDelegate::GetPdfElement(
        blink::WebLocalFrame* frame) {
  return blink::WebElement();
}

bool BravePrintWebViewHelperDelegate::IsPrintPreviewEnabled() {
  return false;
}

bool BravePrintWebViewHelperDelegate::OverridePrint(
    blink::WebLocalFrame* frame) {
  return false;
}
