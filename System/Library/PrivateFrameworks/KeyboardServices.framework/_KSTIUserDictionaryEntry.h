/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate;


@protocol _KSTIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSDate * timestamp; 
@required
-(NSString *)shortcut;
-(void)setPhrase:(id)arg1;
-(void)setShortcut:(id)arg1;
-(NSString *)phrase;
-(NSDate *)timestamp;
-(void)setTimestamp:(id)arg1;

@end

