/*******************************************************************************
 * Copyright (c) 2012, Jean-David Gadina - www.xs-labs.com
 * All rights reserved.
 * 
 * Boost Software License - Version 1.0 - August 17th, 2003
 * 
 * Permission is hereby granted, free of charge, to any person or organization
 * obtaining a copy of the software and accompanying documentation covered by
 * this license (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative works of the
 * Software, and to permit third-parties to whom the Software is furnished to
 * do so, all subject to the following:
 * 
 * The copyright notices in the Software and this entire statement, including
 * the above license grant, this restriction and the following disclaimer,
 * must be included in all copies of the Software, in whole or in part, and
 * all derivative works of the Software, unless such copies or derivative
 * works are solely in the form of machine-executable object code generated by
 * a source language processor.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ******************************************************************************/
 
/* $Id$ */

typedef NSUInteger CKCompletionChunkKind;

FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindOptional;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindTypedText;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindText;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindPlaceholder;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindInformative;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindCurrentParameter;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindLeftParen;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindRightParen;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindLeftBracket;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindRightBracket;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindLeftBrace;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindRightBrace;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindLeftAngle;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindRightAngle;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindComma;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindResultType;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindColon;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindSemiColon;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindEqual;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindHorizontalSpace;
FOUNDATION_EXPORT CKCompletionChunkKind CKCompletionChunkKindVerticalSpace;

@interface CKCompletionChunk: NSObject
{
@protected
    
    NSString            * _text;
    CKCompletionChunkKind _kind;
    
@private
    
    id __CKCompletionChunk_Reserved[ 5 ] __attribute__( ( unused ) );
}

@property( atomic, readonly ) NSString            * text;
@property( atomic, readonly ) CKCompletionChunkKind kind;

+ ( id )completionChunkWithCXCompletionString: ( CXCompletionString )string chunkNumber: ( NSUInteger )chunkNumber;
- ( id )initWithCXCompletionString: ( CXCompletionString )string chunkNumber: ( NSUInteger )chunkNumber;

@end
