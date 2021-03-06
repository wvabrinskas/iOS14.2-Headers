/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/PDAnimateBehavior.h>

@interface PDAnimateScaleBehavior : PDAnimateBehavior {

	CGPoint mTo;
	CGPoint mFrom;
	CGPoint mBy;
	BOOL mHasTo;
	BOOL mHasFrom;
	BOOL mHasBy;

}
-(CGPoint)to;
-(CGPoint)by;
-(CGPoint)from;
-(BOOL)hasTo;
-(id)init;
-(void)setTo:(CGPoint)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasFrom;
-(BOOL)hasBy;
-(void)setFrom:(CGPoint)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBy:(CGPoint)arg1 ;
@end

