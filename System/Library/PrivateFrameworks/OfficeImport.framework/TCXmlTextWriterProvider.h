/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCXmlTextWriterProvider : NSObject {

	xmlTextWriterRef _textWriter;

}

@property (nonatomic,readonly) xmlTextWriterRef textWriter;              //@synthesize textWriter=_textWriter - In the implementation block
-(BOOL)tearDown;
-(BOOL)setUp;
-(void)dealloc;
-(BOOL)setUpWithTextWriter:(xmlTextWriterRef)arg1 ;
-(xmlTextWriterRef)textWriter;
@end
