/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary, NSData;

@interface CTMessagePart : NSObject {

	NSString* _contentType;
	NSMutableDictionary* _contentTypeParams;
	NSString* _contentId;
	NSString* _contentLocation;
	NSData* _data;

}

@property (nonatomic,copy) NSString * contentType;                  //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * contentId;                    //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,copy) NSString * contentLocation;              //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,copy) NSData * data;                           //@synthesize data=_data - In the implementation block
-(NSString *)contentId;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)contentLocation;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)allContentTypeParameterNames;
-(void)setContentType:(NSString *)arg1 ;
-(id)contentTypeParameterWithName:(id)arg1 ;
-(NSString *)contentType;
-(NSData *)data;
@end

