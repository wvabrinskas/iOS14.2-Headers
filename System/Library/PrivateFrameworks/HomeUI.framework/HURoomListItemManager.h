/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>

@class HFItem, HFReorderableHomeKitItemList;

@interface HURoomListItemManager : HFItemManager {

	HFItem* _addRoomItem;
	HFReorderableHomeKitItemList* _clientReorderableRoomList;

}

@property (nonatomic,retain) HFItem * addRoomItem;                                                  //@synthesize addRoomItem=_addRoomItem - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * clientReorderableRoomList;              //@synthesize clientReorderableRoomList=_clientReorderableRoomList - In the implementation block
@property (nonatomic,readonly) long long roomsSection; 
@property (nonatomic,retain) HFReorderableHomeKitItemList * reorderableRoomList; 
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFItem *)addRoomItem;
-(long long)roomsSection;
-(HFReorderableHomeKitItemList *)reorderableRoomList;
-(void)setReorderableRoomList:(HFReorderableHomeKitItemList *)arg1 ;
-(HFReorderableHomeKitItemList *)clientReorderableRoomList;
-(void)setClientReorderableRoomList:(HFReorderableHomeKitItemList *)arg1 ;
-(void)setAddRoomItem:(HFItem *)arg1 ;
@end
