/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlay/CarPlay-Structs.h>
#import <libobjc.A.dylib/CPListItemPrivate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CPSelectableListItem.h>

@class NSString, CPImageSet, NSUUID, CPListTemplate, UIImage;

@interface CPListItem : NSObject <CPListItemPrivate, NSSecureCoding, CPSelectableListItem> {

	BOOL _explicitContent;
	BOOL _playing;
	BOOL _showsDisclosureIndicator;
	long long _accessoryType;
	double _playbackProgress;
	long long _playingIndicatorLocation;
	/*^block*/id _handler;
	NSString* _text;
	id _userInfo;
	NSString* _detailText;
	CPImageSet* _imageSet;
	CPImageSet* _accessoryImageSet;
	NSUUID* _identifier;
	CPListTemplate* _listTemplate;

}

@property (nonatomic,retain) CPImageSet * imageSet;                                      //@synthesize imageSet=_imageSet - In the implementation block
@property (nonatomic,retain) CPImageSet * accessoryImageSet;                             //@synthesize accessoryImageSet=_accessoryImageSet - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CPListTemplate * listTemplate;                       //@synthesize listTemplate=_listTemplate - In the implementation block
@property (assign,nonatomic) long long accessoryType;                                    //@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,getter=isExplicitContent,nonatomic) BOOL explicitContent;              //@synthesize explicitContent=_explicitContent - In the implementation block
@property (assign,nonatomic) double playbackProgress;                                    //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                              //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) long long playingIndicatorLocation;                         //@synthesize playingIndicatorLocation=_playingIndicatorLocation - In the implementation block
@property (nonatomic,copy) id handler;                                                   //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id userInfo;                                                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;                               //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIImage * accessoryImage; 
@property (nonatomic,readonly) BOOL showsDisclosureIndicator;                            //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsExplicitLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(CGSize)maximumImageSize;
-(BOOL)isExplicitContent;
-(void)setText:(NSString *)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(id)userInfo;
-(unsigned long long)hash;
-(UIImage *)accessoryImage;
-(void)setAccessoryImage:(UIImage *)arg1 ;
-(long long)accessoryType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setUserInfo:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(void)setExplicitContent:(BOOL)arg1 ;
-(BOOL)isPlaying;
-(UIImage *)image;
-(void)setPlaybackProgress:(double)arg1 ;
-(double)playbackProgress;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)detailText;
-(id)handler;
-(BOOL)showsDisclosureIndicator;
-(void)setShowsDisclosureIndicator:(BOOL)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
-(void)_setNeedsUpdate;
-(id)initWithText:(id)arg1 detailText:(id)arg2 ;
-(id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 accessoryImage:(id)arg4 accessoryType:(long long)arg5 ;
-(CPImageSet *)imageSet;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(CPListTemplate *)listTemplate;
-(void)setListTemplate:(CPListTemplate *)arg1 ;
-(id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 ;
-(CPImageSet *)accessoryImageSet;
-(long long)playingIndicatorLocation;
-(id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showsDisclosureIndicator:(BOOL)arg4 ;
-(void)setPlayingIndicatorLocation:(long long)arg1 ;
-(void)setShowsExplicitLabel:(BOOL)arg1 ;
-(BOOL)showsExplicitLabel;
-(void)setAccessoryImageSet:(CPImageSet *)arg1 ;
@end
