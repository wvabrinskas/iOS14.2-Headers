/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface EDPhoneticRun : NSObject {

	unsigned mCharIndex;
	unsigned mBaseCharIndex;
	unsigned mBaseCharCount;

}
-(unsigned)charIndex;
-(id)init;
-(id)description;
-(void)setCharIndex:(unsigned)arg1 ;
-(void)adjustIndex:(unsigned long long)arg1 ;
-(unsigned)charBaseIndex;
-(void)setCharBaseIndex:(unsigned)arg1 ;
-(unsigned)charBaseCount;
-(void)setCharBaseCount:(unsigned)arg1 ;
@end
