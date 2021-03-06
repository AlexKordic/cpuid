/*
 * CPUID
 *
 * A simple and small tool to dump/decode CPUID information.
 *
 * Copyright (c) 2010-2013, Steven Noonan <steven@uplinklabs.net>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

#ifndef __vendor_h
#define __vendor_h

typedef enum
{
	VENDOR_UNKNOWN   = 0x0,
	VENDOR_INTEL     = 0x1,
	VENDOR_AMD       = 0x2,
	VENDOR_CYRIX     = 0x4,
	VENDOR_TRANSMETA = 0x8,
	VENDOR_ANY       = (int)-1
} cpu_vendor_t;

typedef enum
{
	HYPERVISOR_UNKNOWN = 0x0,
	HYPERVISOR_XEN  = 0x1,
	HYPERVISOR_VMWARE = 0x2,
	HYPERVISOR_KVM = 0x4
} hypervisor_t;

#endif
