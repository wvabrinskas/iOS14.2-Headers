/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNContactDataSourceDelegate.h>

@protocol CNContactDataSourceDelegate;
@class NSString;

@interface CNContactDataSourceSafeDelegate : NSObject <CNContactDataSourceDelegate> {

	id<CNContactDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNContactDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CNContactDataSourceDelegate>)arg1 ;
-(void)contactDataSourceDidChange:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
