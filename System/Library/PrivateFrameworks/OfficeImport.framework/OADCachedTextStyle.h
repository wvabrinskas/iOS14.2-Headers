/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADCachedTextStyle : NSObject {

	OADCachedTextStyleData mData;
	unsigned long long mHash;

}
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5 ;
-(void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
-(void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
@end

