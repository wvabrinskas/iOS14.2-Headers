/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface NTKFaceViewClassPrewarmCache : NSObject {

	NSMutableDictionary* _prewarmCache;

}
+(id)sharedInstance;
-(id)init;
-(id)prewarmDataForClass:(Class)arg1 ;
-(void)prewarmClasses:(id)arg1 ;
@end

