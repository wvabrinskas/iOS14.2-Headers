/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery, CNCardiMessageEmailGroup, NSArray, CNStarkContactNameView;

@interface CNStarkContactViewController : CNContactContentViewController <CNPropertyBestIDSValueQueryDelegate> {

	CNPropertyBestIDSValueQuery* _bestiMessageQuery;
	CNCardiMessageEmailGroup* _iMessageEmailGroup;
	NSArray* _activatedConstraints;
	CNStarkContactNameView* _contactNameView;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestiMessageQuery;              //@synthesize bestiMessageQuery=_bestiMessageQuery - In the implementation block
@property (nonatomic,retain) CNCardiMessageEmailGroup * iMessageEmailGroup;                //@synthesize iMessageEmailGroup=_iMessageEmailGroup - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                               //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) CNStarkContactNameView * contactNameView;                     //@synthesize contactNameView=_contactNameView - In the implementation block
+(long long)tableViewStyle;
+(BOOL)enablesTransportButtons;
-(void)viewWillLayoutSubviews;
-(id)initWithContact:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(BOOL)isGeminiAvailable;
-(void)setBestiMessageQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
-(BOOL)hasTableViewHeaderFirstSection;
-(void)_initiateBestiMessagePropertyQuery;
-(CNPropertyBestIDSValueQuery *)bestiMessageQuery;
-(CNCardiMessageEmailGroup *)iMessageEmailGroup;
-(void)setIMessageEmailGroup:(CNCardiMessageEmailGroup *)arg1 ;
-(CNStarkContactNameView *)contactNameView;
-(void)setContactNameView:(CNStarkContactNameView *)arg1 ;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(void)setupConstraints;
-(void)queryComplete;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)updateFontColors;
-(id)title;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)displayHeaderView;
-(CGSize)setupTableHeaderView;
-(void)loadContactViewControllerViews;
-(BOOL)shouldDisplayAvatarHeaderView;
-(id)applyContactStyle;
-(BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg1 ;
-(void)initializeTableViewsForHeaderHeight;
-(void)dealloc;
@end
