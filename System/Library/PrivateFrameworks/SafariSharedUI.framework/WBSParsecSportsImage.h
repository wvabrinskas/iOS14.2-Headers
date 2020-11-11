/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSParsecModel.h>

@class WBSParsecImageRepresentation, NSString;

@interface WBSParsecSportsImage : WBSParsecModel {

	long long _alignment;
	WBSParsecImageRepresentation* _imageRepresentation;
	NSString* _label;
	NSString* _name;

}

@property (nonatomic,readonly) long long alignment;                                             //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
+(id)schema;
-(NSString *)label;
-(WBSParsecImageRepresentation *)imageRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(long long)alignment;
@end
