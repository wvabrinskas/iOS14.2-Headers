/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLCloudSharedAlbumInvitationRecord, NSString;

@interface PXSharedAlbumSubscriberInfo : NSObject {

	BOOL _isOwner;
	PLCloudSharedAlbumInvitationRecord* _invitationRecord;
	NSString* _identifier;
	NSString* _email;
	NSString* _phone;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;

}

@property (nonatomic,retain,readonly) PLCloudSharedAlbumInvitationRecord * invitationRecord;              //@synthesize invitationRecord=_invitationRecord - In the implementation block
@property (nonatomic,readonly) BOOL isOwner;                                                              //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * email;                                                          //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * phone;                                                          //@synthesize phone=_phone - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                                                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                                                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                                    //@synthesize displayName=_displayName - In the implementation block
+(id)allSubscribersForAlbum:(id)arg1 ;
+(id)_allSubscribersForAlbum:(id)arg1 includeMyself:(BOOL)arg2 ;
+(id)allSubscribersForAlbumWithObjectID:(id)arg1 includingCurrentUser:(BOOL)arg2 managedObjectContext:(id)arg3 ;
-(NSString *)firstName;
-(id)init;
-(NSString *)phone;
-(id)initWithInvitationRecord:(id)arg1 identifier:(id)arg2 email:(id)arg3 phone:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 displayName:(id)arg7 isOwner:(BOOL)arg8 ;
-(id)matchingContactWithKeysToFetch:(id)arg1 outMatchingKey:(id*)arg2 outMatchingIdentifier:(id*)arg3 ;
-(NSString *)lastName;
-(NSString *)email;
-(BOOL)isOwner;
-(NSString *)identifier;
-(id)contactStore;
-(NSString *)displayName;
-(PLCloudSharedAlbumInvitationRecord *)invitationRecord;
@end
