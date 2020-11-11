/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSPSharedTripXPCServer <NSObject>
@required
-(void)stopSharingTripWithMessagesContacts:(id)arg1;
-(void)blockSharedTrip:(id)arg1;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startSharingTripWithMessagesContacts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startSharingTripWithMessagesGroup:(id)arg1 completion:(/*^block*/id)arg2;
-(void)checkinWithCompletion:(/*^block*/id)arg1;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stopSharingTripWithMessagesGroup:(id)arg1;
-(void)stopSharingTripWithContacts:(id)arg1;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1;
-(void)stopSharingTrip;
-(void)startSharingTripWithContacts:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSharingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(/*^block*/id)arg1;

@end
