/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>

@protocol _SFActivityDelegate;
@interface _SFActivity : UIActivity {

	id<_SFActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_SFActivityDelegate>)delegate;
-(void)setDelegate:(id<_SFActivityDelegate>)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
@end

