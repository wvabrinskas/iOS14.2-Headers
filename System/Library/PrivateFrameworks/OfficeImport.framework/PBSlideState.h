/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface PBSlideState : NSObject {

	NSMutableDictionary* mBuildOrderMap;
	unsigned mCurrentGroupId;

}
-(id)init;
-(void)reset;
-(id)buildOrderMap;
-(void)addBuild:(id)arg1 order:(unsigned)arg2 ;
-(unsigned)generateGroupId;
@end
