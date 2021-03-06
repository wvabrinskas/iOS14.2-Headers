/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SXComponents;


@protocol SXDOMObjectProviding <NSObject>
@property (readonly,nonatomic) id<SXDocumentStyle> documentStyle; 
@property (readonly,nonatomic) SXComponents * components; 
@property (readonly,nonatomic) id<SXAutoPlacement> autoPlacement; 
@required
-(id)componentStyleForComponent:(id)arg1;
-(id)componentStyleForComponent:(id)arg1;
-(id)imageResourceForIdentifier:(id)arg1;
-(id)imageResourceForIdentifier:(id)arg1;
-(id)resourceForIdentifier:(id)arg1;
-(id)resourceForIdentifier:(id)arg1;
-(id<SXAutoPlacement>)autoPlacement;
-(SXComponents *)components;
-(id)componentLayoutForIdentifier:(id)arg1;
-(id)componentLayoutForIdentifier:(id)arg1;
-(id<SXDocumentStyle>)documentStyle;

@end

