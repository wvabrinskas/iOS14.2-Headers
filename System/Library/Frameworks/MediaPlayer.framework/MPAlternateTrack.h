/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, AVMediaSelectionOption;

@interface MPAlternateTrack : NSObject {

	NSString* _displayName;
	NSString* _canonicalLanguageIdentifier;
	AVMediaSelectionOption* _option;
	BOOL _isMainProgram;
	BOOL _isDVS;

}

@property (nonatomic,retain) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) AVMediaSelectionOption * option;                     //@synthesize option=_option - In the implementation block
@property (nonatomic,readonly) BOOL isMainProgram;                                  //@synthesize isMainProgram=_isMainProgram - In the implementation block
@property (nonatomic,readonly) BOOL isDVS;                                          //@synthesize isDVS=_isDVS - In the implementation block
@property (nonatomic,readonly) NSString * canonicalLanguageIdentifier;              //@synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier - In the implementation block
+(id)threeCharCodesForEncodedISO639_2_T:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isDVS;
-(id)initWithOption:(id)arg1 ;
-(BOOL)isMainProgram;
-(void)_setDisplayNameFromOption:(id)arg1 ;
-(AVMediaSelectionOption *)option;
-(long long)compare:(id)arg1 ;
-(NSString *)displayName;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)canonicalLanguageIdentifier;
@end

