/* Interface of NSFormatter class
   Copyright (C) 1998 Free Software Foundation, Inc.

   Written by:  Richard Frith-Macdonald <richard@brainstorm.co.uk>
   Created: November 1998

   This file is part of the GNUstep Base Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
   */

#ifndef __NSFormatter_h_GNUSTEP_BASE_INCLUDE
#define __NSFormatter_h_GNUSTEP_BASE_INCLUDE

#include	<Foundation/NSObject.h>
#include	<Foundation/NSGeometry.h>

#ifndef	STRICT_OPENSTEP

@class	NSString, NSAttributedString, NSDictionary;

@interface	NSFormatter : NSObject <NSCopying, NSCoding>
{
}
- (NSAttributedString*) attributedStringForObjectValue: (id)anObject
				 withDefaultAttributes: (NSDictionary*)attr;
- (NSString*) editingStringForObjectValue: (id)anObject;
- (BOOL) getObjectValue: (id*)anObject
	      forString: (NSString*)string
       errorDescription: (NSString**)error;
- (BOOL) isPartialStringValid: (NSString*)partialString
	     newEditingString: (NSString**)newString
	     errorDescription: (NSString**)error;
- (BOOL) isPartialStringValid: (NSString**)partialStringPtr
        proposedSelectedRange: (NSRange*)proposedSelRangePtr
               originalString: (NSString*)origString
        originalSelectedRange: (NSRange)originalSelRangePtr
             errorDescription: (NSString**)error;
- (NSString*) stringForObjectValue: (id)anObject;
@end

#endif
#endif

