/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface ACCMediaLibraryUpdatePlaylistContent : NSObject {

	int _contentStyle;
	NSString* _mediaLibraryUID;
	NSString* _revision;
	unsigned long long _persistentID;
	NSMutableArray* _contentList;

}

@property (nonatomic,retain) NSMutableArray * contentList;                 //@synthesize contentList=_contentList - In the implementation block
@property (nonatomic,retain) NSString * mediaLibraryUID;                   //@synthesize mediaLibraryUID=_mediaLibraryUID - In the implementation block
@property (nonatomic,retain) NSString * revision;                          //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (assign,nonatomic) int contentStyle;                             //@synthesize contentStyle=_contentStyle - In the implementation block
-(unsigned long long)persistentID;
-(id)debugDescription;
-(NSString *)revision;
-(void)setRevision:(NSString *)arg1 ;
-(id)description;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(int)contentStyle;
-(void)setContentStyle:(int)arg1 ;
-(NSMutableArray *)contentList;
-(void)addContentItem:(id)arg1 ;
-(id)copyDict;
-(id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3 ;
-(void)setMediaLibraryUID:(NSString *)arg1 ;
-(NSString *)mediaLibraryUID;
-(unsigned long long)contentListCount;
-(id)copyContentDictList;
-(id)initWithMediaLibrary:(id)arg1 revision:(id)arg2 dict:(id)arg3 ;
-(id)copyContentList;
-(void)replaceContentList:(id)arg1 ;
-(void)addContentPersistentID:(unsigned long long)arg1 ;
-(void)replaceContentItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceContentPersistentID:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)getContentItemAtIndex:(unsigned long long)arg1 ;
-(void)iterateContentItems:(/*^block*/id)arg1 ;
-(void)iterateContentPersistentIDs:(/*^block*/id)arg1 ;
-(void)setContentList:(NSMutableArray *)arg1 ;
@end
