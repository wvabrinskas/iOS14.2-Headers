/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString, SACalendar, SAMPPlaybackInfo;

@interface SAMPMediaEntity : SADomainObject

@property (nonatomic,copy) NSString * adamIdentifier; 
@property (nonatomic,copy) NSString * brandIdentifier; 
@property (nonatomic,retain) SACalendar * dateAdded; 
@property (assign,nonatomic) BOOL explicit; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * mediaType; 
@property (nonatomic,retain) SAMPPlaybackInfo * playbackInfo; 
@property (nonatomic,copy) NSString * rawPlaybackInfo; 
@property (nonatomic,copy) NSString * releaseDate; 
@property (nonatomic,copy) NSString * sortTitle; 
@property (nonatomic,copy) NSString * storeId; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL unplayable; 
+(id)mediaEntity;
+(id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setMediaType:(NSString *)arg1 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)releaseDate;
-(void)setReleaseDate:(NSString *)arg1 ;
-(void)setBrandIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setSortTitle:(NSString *)arg1 ;
-(NSString *)mediaType;
-(void)setStoreId:(NSString *)arg1 ;
-(SAMPPlaybackInfo *)playbackInfo;
-(NSString *)storeId;
-(id)encodedClassName;
-(NSString *)externalIdentifier;
-(void)setExplicit:(BOOL)arg1 ;
-(NSString *)rawPlaybackInfo;
-(void)setRawPlaybackInfo:(NSString *)arg1 ;
-(BOOL)unplayable;
-(void)setUnplayable:(BOOL)arg1 ;
-(NSString *)brandIdentifier;
-(NSString *)title;
-(SACalendar *)dateAdded;
-(BOOL)explicit;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)adamIdentifier;
-(NSString *)sortTitle;
-(void)setDateAdded:(SACalendar *)arg1 ;
-(void)setAdamIdentifier:(NSString *)arg1 ;
-(void)setPlaybackInfo:(SAMPPlaybackInfo *)arg1 ;
@end

