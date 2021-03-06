/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WDText;

@interface WDBlock : NSObject {

	WDText* mText;

}
-(id)init;
-(id)initWithText:(id)arg1 ;
-(id)document;
-(id)text;
-(BOOL)isEmpty;
-(void)clearProperties;
-(id)description;
-(int)blockType;
-(int)textType;
-(id)runIterator;
-(id)newRunIterator;
@end

