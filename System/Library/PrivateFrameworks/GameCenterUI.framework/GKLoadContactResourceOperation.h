/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKLoadResourceOperation.h>

@class NSString, CNAvatarImageRenderer;

@interface GKLoadContactResourceOperation : GKLoadResourceOperation {

	NSString* _contactId;
	CNAvatarImageRenderer* _monogrammer;

}

@property (nonatomic,retain) CNAvatarImageRenderer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactId;                      //@synthesize contactId=_contactId - In the implementation block
+(double)mainScreenScale;
-(CNAvatarImageRenderer *)monogrammer;
-(void)setMonogrammer:(CNAvatarImageRenderer *)arg1 ;
-(void)main;
-(id)makeFetchError;
-(id)initWithContactId:(id)arg1 ;
-(NSString *)contactId;
@end

