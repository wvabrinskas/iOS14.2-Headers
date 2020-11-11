/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKDataMetadataSection.h>

@protocol HKDataMetadataDeletionSectionDelegate;
@class UITableViewCell, NSString;

@interface HKDataMetadataDeletionSection : HKDataMetadataSection {

	BOOL _enabled;
	id<HKDataMetadataDeletionSectionDelegate> _delegate;
	UITableViewCell* _cell;
	NSString* _title;

}

@property (nonatomic,retain) UITableViewCell * cell;                                                 //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataMetadataDeletionSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
-(UITableViewCell *)cell;
-(id)initWithTitle:(id)arg1 ;
-(id)init;
-(id<HKDataMetadataDeletionSectionDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)setDelegate:(id<HKDataMetadataDeletionSectionDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateCellForEnabledState;
@end
