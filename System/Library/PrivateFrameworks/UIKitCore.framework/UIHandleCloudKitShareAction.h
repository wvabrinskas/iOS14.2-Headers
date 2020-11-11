/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class CKShareMetadata;

@interface UIHandleCloudKitShareAction : BSAction {

	CKShareMetadata* _cachedMetadata;

}

@property (nonatomic,readonly) CKShareMetadata * shareMetadata; 
+(void)loadCloudKitFramework;
+(id)cloudKitShareActionWithShareMetadata:(id)arg1 ;
-(id)initWithShareMetadata:(id)arg1 ;
-(long long)UIActionType;
-(id)data;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(CKShareMetadata *)shareMetadata;
@end
