/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary;

@interface LPMultipleMetadataPresentationTransformer : NSObject {

	NSArray* _metadata;
	NSDictionary* _summaryCounts;
	BOOL _hasOnlyFiles;
	unsigned long long _preferredSizeClass;

}

@property (assign,nonatomic) unsigned long long preferredSizeClass;              //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
-(id)summary;
-(id)summaryMetadata;
-(void)setPreferredSizeClass:(unsigned long long)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(id)_summaryCounts;
-(id)_summarySubtitle;
-(id)summaryImages;
-(unsigned long long)preferredSizeClass;
@end

