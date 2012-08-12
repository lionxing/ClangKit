/*******************************************************************************
 * Copyright (c) 2012, Jean-David Gadina <macmade@eosgarden.com>
 * All rights reserved
 ******************************************************************************/
 
/* $Id$ */

int main( void )
{
    CKTranslationUnit * tu;
    
    @autoreleasepool
    {
        tu = [ CKTranslationUnit    translationUnitWithText:    @"int main( void ) { return 0; }"
                                    language:                   CKLanguageC
                                    args:                       [ NSArray arrayWithObject: @"-Weverything" ]
             ];
        
        NSLog( @"%@", tu.diagnostics );
        NSLog( @"%@", tu.tokens );
        
        tu.text = @"int main( void ) { return 1; }\n";
        
        NSLog( @"%@", tu.diagnostics );
        NSLog( @"%@", tu.tokens );
    }
    
    return 0;
}

