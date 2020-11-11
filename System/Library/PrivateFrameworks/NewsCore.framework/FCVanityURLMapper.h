/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NTPBVanityURLMapping;

@interface FCVanityURLMapper : NSObject {

	NTPBVanityURLMapping* _vanityURLMapping;

}

@property (nonatomic,copy,readonly) NTPBVanityURLMapping * vanityURLMapping;              //@synthesize vanityURLMapping=_vanityURLMapping - In the implementation block
-(id)init;
-(id)_standardizedInputPathWithPath:(id)arg1 ;
-(NTPBVanityURLMapping *)vanityURLMapping;
-(id)_standardizedMappingPathWithPath:(id)arg1 ;
-(void)_standardizeResultPath:(id)arg1 ;
-(void)_setParametersIfNeededWithComponents:(id)arg1 parameters:(id)arg2 ;
-(id)_pathWithTrailingForwardSlashWithPath:(id)arg1 ;
-(id)_standardizedQueryWithParameters:(id)arg1 query:(id)arg2 ;
-(id)_standardizedFragmentWithParameters:(id)arg1 fragment:(id)arg2 ;
-(id)initWithVanityURLMapping:(id)arg1 ;
-(id)URLForVanityURL:(id)arg1 ;
@end
