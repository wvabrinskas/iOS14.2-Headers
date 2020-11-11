/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol MPCPlayerFeedbackCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSString * localizedShortTitle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL value; 
@required
-(NSString *)localizedShortTitle;
-(NSString *)localizedTitle;
-(long long)presentationStyle;
-(BOOL)value;
-(id)changeValue:(BOOL)arg1;

@end
