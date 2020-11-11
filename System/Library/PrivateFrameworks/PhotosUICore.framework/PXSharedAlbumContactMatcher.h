/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNContactStore, NSCache;

@interface PXSharedAlbumContactMatcher : NSObject {

	CNContactStore* _contactStore;
	NSCache* _avatarRendererByContactImageDiameter;
	NSCache* _contactIdentifiersBySubscriberIdentifiers;
	NSCache* _contactPhotosCache;

}
+(id)sharedMatcher;
-(id)init;
-(void)requestContactPhotoForContact:(id)arg1 diameter:(double)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)contactsMatchingSubscriberInfos:(id)arg1 keysToFetch:(id)arg2 ;
-(void)_observeContactStoreNotifications;
-(id)_fetchContactMatchingIdentifier:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_fetchContactsMatchingIdentifiers:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_fetchContactMatchingSubscriberInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(void)contactsDidChange:(id)arg1 ;
@end
