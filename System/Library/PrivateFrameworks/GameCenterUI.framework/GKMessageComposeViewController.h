/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFMessageComposeViewControllerInternalDelegate.h>

@protocol GKMessageComposeViewControllerDelegate, GKDashboardNearbyBrowserDelegate;
@class NSURL, GKTournament, NSArray, MFMessageComposeViewController, NSDictionary, NSString, NSMutableArray;

@interface GKMessageComposeViewController : UIViewController <MFMessageComposeViewControllerInternalDelegate> {

	NSURL* _shareURL;
	id<GKMessageComposeViewControllerDelegate> _delegate;
	id<GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
	GKTournament* _tournament;
	long long _maximumSelectablePlayersForPicker;
	NSArray* _currentlySelectedPlayersForPicker;
	MFMessageComposeViewController* _composeController;
	NSDictionary* _playerNamesToPlayers;
	NSString* _messageToSend;
	NSMutableArray* _friendsToInvite;
	NSMutableArray* _contactsToInvite;

}

@property (nonatomic,retain) MFMessageComposeViewController * composeController;                      //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,retain) NSDictionary * playerNamesToPlayers;                                     //@synthesize playerNamesToPlayers=_playerNamesToPlayers - In the implementation block
@property (nonatomic,retain) NSString * messageToSend;                                                //@synthesize messageToSend=_messageToSend - In the implementation block
@property (nonatomic,retain) NSMutableArray * friendsToInvite;                                        //@synthesize friendsToInvite=_friendsToInvite - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactsToInvite;                                       //@synthesize contactsToInvite=_contactsToInvite - In the implementation block
@property (nonatomic,retain) NSURL * shareURL;                                                        //@synthesize shareURL=_shareURL - In the implementation block
@property (assign,nonatomic,__weak) id<GKMessageComposeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;              //@synthesize nearbyDelegate=_nearbyDelegate - In the implementation block
@property (nonatomic,retain) GKTournament * tournament;                                               //@synthesize tournament=_tournament - In the implementation block
@property (assign,nonatomic) long long maximumSelectablePlayersForPicker;                             //@synthesize maximumSelectablePlayersForPicker=_maximumSelectablePlayersForPicker - In the implementation block
@property (nonatomic,retain) NSArray * currentlySelectedPlayersForPicker;                             //@synthesize currentlySelectedPlayersForPicker=_currentlySelectedPlayersForPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canSendText;
-(id<GKMessageComposeViewControllerDelegate>)delegate;
-(NSString *)messageToSend;
-(void)setupPickerBlock;
-(void)showPlayerPickerForCompose;
-(NSDictionary *)playerNamesToPlayers;
-(void)setPlayerNamesToPlayers:(NSDictionary *)arg1 ;
-(long long)maximumSelectablePlayersForPicker;
-(NSArray *)currentlySelectedPlayersForPicker;
-(void)addPlayersToMessageCompose:(id)arg1 ;
-(id)contactForAddress:(id)arg1 fromContactStore:(id)arg2 ;
-(void)setMessageToSend:(NSString *)arg1 ;
-(void)setContactsToInvite:(NSMutableArray *)arg1 ;
-(void)setFriendsToInvite:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<GKMessageComposeViewControllerDelegate>)arg1 ;
-(NSMutableArray *)contactsToInvite;
-(NSMutableArray *)friendsToInvite;
-(id)initWithMessage:(id)arg1 maxNumberOfPlayers:(long long)arg2 ;
-(void)preparePresentationForMinPlayers:(long long)arg1 maxPlayers:(long long)arg2 shareURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setMaximumSelectablePlayersForPicker:(long long)arg1 ;
-(void)setCurrentlySelectedPlayersForPicker:(NSArray *)arg1 ;
-(NSURL *)shareURL;
-(MFMessageComposeViewController *)composeController;
-(void)setTournament:(GKTournament *)arg1 ;
-(GKTournament *)tournament;
-(void)setComposeController:(MFMessageComposeViewController *)arg1 ;
-(void)setNearbyDelegate:(id<GKDashboardNearbyBrowserDelegate>)arg1 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(id<GKDashboardNearbyBrowserDelegate>)nearbyDelegate;
-(void)setShareURL:(NSURL *)arg1 ;
-(void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
