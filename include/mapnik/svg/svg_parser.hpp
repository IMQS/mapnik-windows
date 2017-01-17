/*****************************************************************************
 *
 * This file is part of Mapnik (c++ mapping toolkit)
 *
 * Copyright (C) 2015 Artem Pavlenko
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

#ifndef MAPNIK_SVG_PARSER_HPP
#define MAPNIK_SVG_PARSER_HPP

// mapnik
#include <mapnik/config.hpp>
#include <mapnik/svg/svg_path_attributes.hpp>
#include <mapnik/svg/svg_converter.hpp>
#include <mapnik/svg/svg_path_adapter.hpp>
#include <mapnik/gradient.hpp>
#include <mapnik/util/noncopyable.hpp>

// stl
#include <map>

namespace  mapnik { namespace svg {

    class MAPNIK_DECL svg_parser : private util::noncopyable
    {
        using error_message_container = std::vector<std::string> ;
    public:
        explicit svg_parser(svg_converter_type & path);
        ~svg_parser();
        error_message_container const& error_messages() const;
        bool parse(std::string const& filename);
        bool parse_from_string(std::string const& svg);
        svg_converter_type & path_;
        bool is_defs_;
        std::map<std::string, gradient> gradient_map_;
        std::pair<std::string, gradient> temporary_gradient_;
        error_message_container error_messages_;
    };

}}


#endif // MAPNIK_SVG_PARSER_HPP
