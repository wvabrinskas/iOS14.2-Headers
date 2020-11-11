/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFUIPreferencesDelegate;
@class NSUserDefaults;

@interface AFUIPreferences : NSObject {

	NSUserDefaults* _userDefaults;
	id<AFUIPreferencesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFUIPreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(id)init;
-(id<AFUIPreferencesDelegate>)delegate;
-(void)synchronize;
-(double)doubleForKey:(id)arg1 ;
-(void)setDelegate:(id<AFUIPreferencesDelegate>)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithSuiteName:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(id)initWithDefaultsAtURL:(id)arg1 ;
-(void)_mutateValueForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDefaultsResource:(id)arg1 withExtension:(id)arg2 inBundle:(id)arg3 ;
@end
