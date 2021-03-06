/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSData, NSString, UIImage;

@interface SFAirDropPayload : NSObject {

	BOOL _wasString;
	NSURL* _URL;
	NSData* _data;
	NSString* _type;
	UIImage* _previewImage;
	NSString* _payloadDescription;
	long long _identifer;

}

@property (nonatomic,copy) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                   //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (assign,nonatomic) long long identifer;                      //@synthesize identifer=_identifer - In the implementation block
@property (assign,nonatomic) BOOL wasString;                           //@synthesize wasString=_wasString - In the implementation block
+(id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5 ;
+(id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4 ;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(void)setData:(NSData *)arg1 ;
-(NSString *)payloadDescription;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(id)description;
-(long long)identifer;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)data;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)type;
-(void)setIdentifer:(long long)arg1 ;
-(NSURL *)URL;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(BOOL)wasString;
-(void)setWasString:(BOOL)arg1 ;
@end

