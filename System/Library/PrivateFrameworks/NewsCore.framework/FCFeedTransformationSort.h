/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSString;

@interface FCFeedTransformationSort : NSObject <FCFeedTransforming>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithSortMethod:(long long)arg1 ;
+(id)transformationWithSortMethod:(long long)arg1 configurationSet:(long long)arg2 personalizer:(id)arg3 ;
+(id)transformationWithSortMethod:(long long)arg1 personalizer:(id)arg2 ;
-(id)transformFeedItems:(id)arg1 ;
@end
