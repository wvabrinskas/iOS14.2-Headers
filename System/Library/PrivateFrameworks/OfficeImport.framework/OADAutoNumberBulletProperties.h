/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OADBulletProperties.h>

@interface OADAutoNumberBulletProperties : OADBulletProperties {

	int mSchemeType;
	unsigned long long mStartIndex;

}
-(unsigned long long)startIndex;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(int)autoNumberSchemeType;
-(id)initWithAutoNumberSchemeType:(int)arg1 startIndex:(unsigned long long)arg2 ;
@end

