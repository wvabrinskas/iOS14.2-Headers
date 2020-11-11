/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SBHClockApplicationIconImageView.h>
#import <libobjc.A.dylib/SBDateTimeOverrideObserver.h>

@class NSString;

@interface SBClockApplicationIconImageView : SBHClockApplicationIconImageView <SBDateTimeOverrideObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 ;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
@end
