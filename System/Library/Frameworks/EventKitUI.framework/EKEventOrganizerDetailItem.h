/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@protocol EKIdentityProtocol;
@class UITableViewCell;

@interface EKEventOrganizerDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	BOOL _hideDisclosureIndicator;
	id<EKIdentityProtocol> _organizerOverride;

}

@property (retain) id<EKIdentityProtocol> organizerOverride;              //@synthesize organizerOverride=_organizerOverride - In the implementation block
@property (assign,nonatomic) BOOL hideDisclosureIndicator;                //@synthesize hideDisclosureIndicator=_hideDisclosureIndicator - In the implementation block
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)hideDisclosureIndicator;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_updateDisclosureIndicator;
-(void)reset;
-(void)setOrganizerOverride:(id<EKIdentityProtocol>)arg1 ;
-(id<EKIdentityProtocol>)organizerOverride;
-(void)setHideDisclosureIndicator:(BOOL)arg1 ;
@end
