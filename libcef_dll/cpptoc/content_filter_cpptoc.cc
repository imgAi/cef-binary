// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/content_filter_cpptoc.h"
#include "libcef_dll/ctocpp/stream_reader_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK content_filter_process_data(
    struct _cef_content_filter_t* self, const void* data, int data_size,
    struct _cef_stream_reader_t** substitute_data) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return;
  // Verify param: substitute_data; type: refptr_diff_byref
  DCHECK(substitute_data);
  if (!substitute_data)
    return;

  // Translate param: substitute_data; type: refptr_diff_byref
  CefRefPtr<CefStreamReader> substitute_dataPtr;
  if (substitute_data && *substitute_data)
    substitute_dataPtr = CefStreamReaderCToCpp::Wrap(*substitute_data);
  CefStreamReader* substitute_dataOrig = substitute_dataPtr.get();

  // Execute
  CefContentFilterCppToC::Get(self)->ProcessData(
      data,
      data_size,
      substitute_dataPtr);

  // Restore param: substitute_data; type: refptr_diff_byref
  if (substitute_data) {
    if (substitute_dataPtr.get()) {
      if (substitute_dataPtr.get() != substitute_dataOrig) {
        *substitute_data = CefStreamReaderCToCpp::Unwrap(substitute_dataPtr);
      }
    } else {
      *substitute_data = NULL;
    }
  }
}

void CEF_CALLBACK content_filter_drain(struct _cef_content_filter_t* self,
    struct _cef_stream_reader_t** remainder) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: remainder; type: refptr_diff_byref
  DCHECK(remainder);
  if (!remainder)
    return;

  // Translate param: remainder; type: refptr_diff_byref
  CefRefPtr<CefStreamReader> remainderPtr;
  if (remainder && *remainder)
    remainderPtr = CefStreamReaderCToCpp::Wrap(*remainder);
  CefStreamReader* remainderOrig = remainderPtr.get();

  // Execute
  CefContentFilterCppToC::Get(self)->Drain(
      remainderPtr);

  // Restore param: remainder; type: refptr_diff_byref
  if (remainder) {
    if (remainderPtr.get()) {
      if (remainderPtr.get() != remainderOrig) {
        *remainder = CefStreamReaderCToCpp::Unwrap(remainderPtr);
      }
    } else {
      *remainder = NULL;
    }
  }
}


// CONSTRUCTOR - Do not edit by hand.

CefContentFilterCppToC::CefContentFilterCppToC(CefContentFilter* cls)
    : CefCppToC<CefContentFilterCppToC, CefContentFilter, cef_content_filter_t>(
        cls) {
  struct_.struct_.process_data = content_filter_process_data;
  struct_.struct_.drain = content_filter_drain;
}

#ifndef NDEBUG
template<> long CefCppToC<CefContentFilterCppToC, CefContentFilter,
    cef_content_filter_t>::DebugObjCt = 0;
#endif

